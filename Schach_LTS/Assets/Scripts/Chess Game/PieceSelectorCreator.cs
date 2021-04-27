using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PieceSelectorCreator : MonoBehaviour
{
    [SerializeField] GameObject PieceSelectorPrefab;
    private List<GameObject> instantiatedSelectors = new List<GameObject>();

    public void ShowSelectedPiece(Vector3 pos, bool squareData)
    {
        ClearSelection();

        GameObject selector = Instantiate(PieceSelectorPrefab, Data.Key)
    }

    public void ClearSelection()
    {
        for (int i = 0; i < instantiatedSelectors.Count; i++)
        {
            Destroy(instantiatedSelectors[i]);
        }
    }
}
