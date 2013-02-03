/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSURL, SAFmfGeoFence, NSString;

@interface SAFmfGeoFenceSetCompleted : SABaseClientBoundCommand <SAServerBoundCommand> {
}

@property(copy) NSString * aceId;
@property(retain) SAFmfGeoFence * geoFence;
@property(copy) NSString * refId;
@property(copy) NSURL * searchContext;
@property(copy) NSURL * targetAppId;

+ (id)geoFenceSetCompleted;
+ (id)geoFenceSetCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)geoFence;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)searchContext;
- (void)setGeoFence:(id)arg1;
- (void)setSearchContext:(id)arg1;
- (void)setTargetAppId:(id)arg1;
- (id)targetAppId;

@end