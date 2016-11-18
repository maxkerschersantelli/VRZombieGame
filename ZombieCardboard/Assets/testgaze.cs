using UnityEngine;
using System.Collections;

public class testgaze : MonoBehaviour {
	private static CardboardControl cardboard;
	// Use this for initialization
	void Start () {
		cardboard = GameObject.Find("CardboardControlManager").GetComponent<CardboardControl>();
	}
	
	// Update is called once per frame
	void Update () {
		if (cardboard.gaze.Object () == this.gameObject ) {

		}
	}
}
