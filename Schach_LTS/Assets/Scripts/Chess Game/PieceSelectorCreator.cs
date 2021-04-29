using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PieceSelectorCreator : MonoBehaviour
{
    [SerializeField] GameObject PieceSelectorPrefab;
    private GameObject instantiadtedGameObject;

    public void ShowSelectedPiece(Vector3 pos)
    {
        ClearSelection();

        instantiadtedGameObject = Instantiate(PieceSelectorPrefab, pos, Quaternion.identity);
    }

    public void ClearSelection()
    {
        Destroy(instantiadtedGameObject);
    }
}
