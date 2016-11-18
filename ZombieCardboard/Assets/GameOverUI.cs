using UnityEngine;
using System.Collections;

public class GameOverUI : MonoBehaviour {

	public Camera cam;
	private static CardboardControl cardboard;
	public GameObject zombie;

	private bool gameOver;
	private CanvasGroup group;

	// Use this for initialization
	void Start () {

		cardboard = GameObject.Find("CardboardControlManager").GetComponent<CardboardControl>();

		if (cam == null) {
			cam = Camera.main;
		}

		if (cam != null) {
			// Tie this to the camera, and do not keep the local orientation.
			transform.SetParent(cam.GetComponent<Transform>(), true);
		}

		group = ((CanvasGroup)this.GetComponent (typeof(CanvasGroup)));
	}
	
	// Update is called once per frame
	void Update () {
		if (gameOver && cardboard.trigger.IsHeld ()) {
			group.alpha = 0f;
			((ZombieBehavior)zombie.GetComponent ("ZombieBehavior")).Killed ();
		}
	}

	public void GameOver(){
		gameOver = true;
		group.alpha = 1f;
	}
}
