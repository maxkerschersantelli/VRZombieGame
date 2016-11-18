using UnityEngine;
using System.Collections;

public class Flashlight : MonoBehaviour {

	public Light flashlight;
	public double battery;
	public double drainRate;
	public double rechargeRate;
	public double restartAmount;

	private static CardboardControl cardboard;

	// Use this for initialization
	void Start () {
		this.transform.position = Camera.main.transform.position;
		this.transform.forward = Camera.main.transform.forward;
		flashlight = (Light)this.GetComponent (typeof(Light));
		cardboard = GameObject.Find("CardboardControlManager").GetComponent<CardboardControl>();
	}
	
	// Update is called once per frame
	void Update () {
		this.transform.forward = Camera.main.transform.forward;

		if (cardboard.trigger.IsHeld() && !flashlight.enabled && battery >= restartAmount) {
			flashlight.enabled = true;
		}

		if (!cardboard.trigger.IsHeld() || battery <= 0) {
			flashlight.enabled = false;
		}

		if (flashlight.enabled) {
			battery -= drainRate;
		} else if(battery < 100){
			battery += rechargeRate;
		}

		if (battery > 100) {
			battery = 100;
		}
	}
}
