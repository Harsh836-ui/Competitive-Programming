lb = 0, ub = n - 1;
    while (lb <= ub)
    {
        mid = (lb + ub) / 2;
        if (a[mid] == find)
        {
            printf("Element %d present  at location %d", find, mid + 1);
            count++;
            break;
        }
        if (a[mid] < find)
            lb = mid + 1;
        if (a[mid] > find)
            ub = mid - 1;
    }
