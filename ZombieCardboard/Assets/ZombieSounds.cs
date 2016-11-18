using UnityEngine;
using System.Collections;

public class ZombieSounds : MonoBehaviour {

	public float footStepRate;
	private GvrAudioSource[] sounds;
	private bool x = true;

	// Use this for initialization
	void Start () {
		sounds = GetComponents<GvrAudioSource>();
	}
	
	// Update is called once per frame
	void Update () {
		if (x) {
			StartCoroutine ("PlayStep");
			x = false;
		}
	}

	IEnumerator PlayStep()
	{
		sounds [0].Play ();
		print ("step");
		yield return new WaitForSeconds(1);
		x = true;
	}
}
