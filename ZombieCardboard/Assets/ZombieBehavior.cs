using UnityEngine;
using System.Collections;

public class ZombieBehavior : MonoBehaviour {

	public GameObject target;
	NavMeshAgent agent;

	public GameObject flashlight;
	private Flashlight f;

	public GameObject spawners;

	private GvrAudioSource[] sounds;

	private static CardboardControl cardboard;

	// Use this for initialization
	void Start () {
		sounds = GetComponents<GvrAudioSource>();

		f = (Flashlight)flashlight.GetComponent ("Flashlight");
		cardboard = GameObject.Find("CardboardControlManager").GetComponent<CardboardControl>();

		agent = GetComponent<NavMeshAgent> ();
		agent.SetDestination(target.transform.position);

		Killed ();
	}
	
	// Update is called once per frame
	void Update () {
		if (cardboard.gaze.Object () == this.gameObject && f.flashlight.enabled) {
			Killed ();
		}

		if (!agent.pathPending)
		{
			if (agent.remainingDistance <= agent.stoppingDistance)
			{
				if (!agent.hasPath || agent.velocity.sqrMagnitude == 0f)
				{
					((GameOverUI)GameObject.Find ("GameOverCanvas").GetComponent("GameOverUI")).GameOver ();
				}
			}
		}
	}

	public void Killed (){
		StartCoroutine ("Respawn");
	}

	IEnumerator Respawn()
	{
		sounds [1].Play ();
		yield return new WaitForSeconds(1);
		int x = (int)Random.Range (0.0f, spawners.transform.childCount);
		Transform spawn = spawners.transform.GetChild (x);
		this.transform.position = spawn.position;
	}
}
