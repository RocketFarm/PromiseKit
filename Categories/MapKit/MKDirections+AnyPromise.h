#import <MapKit/MKDirections.h>
#import <PromiseKit/AnyPromise.h>

/**
 To import the `MKDirections` category:

    use_frameworks!
    pod "PromiseKit/MapKit"

 And then in your sources:

    #import <PromiseKit/PromiseKit.h>
*/
@interface MKDirections (PromiseKit)

/**
 Begins calculating the requested route information asynchronously.

 @param request The request object containing the start and end points of the route.

 @return A promise that fulfills with a `MKDirectionsResponse`.
*/
- (AnyPromise *)calculateDirections;

/**
 Begins calculating the requested travel-time information asynchronously.

 @param request The request object containing the start and end points of the route.

 @return A promise that fulfills with a `MKETAResponse`.
*/
- (AnyPromise *)calculateETA;

@end