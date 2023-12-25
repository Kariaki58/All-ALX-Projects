from math import pi


def circle_area(r):
    """calculate the area of a circle

    Args:
        r (int): input an integer value, else the function will fail

    Returns:
        double: area of circle
    """
    if type(r) not in [int, float]:
        raise TypeError("The radius must be a non-negative")
    if (r < 0):
        raise ValueError("The radius should be > 0.")
    return pi * (r ** 2)

if __name__=="__main__":
    radii = [2, 0, -3, 2 + 5j, True, "radius"]

    message = "Area of circles with r = {radius} is {area}"
    for r in radii:
        print(message.format(radius=r, area=circle_area(r)))
