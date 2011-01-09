/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/MapKit.framework/MapKit
 */

@class MKMapViewInternal;



@interface MKMapView : UIView 
{
    MKMapViewInternal *_internal;
}

@property(readonly) CLLocation *userLocation;
@property(retain) CLLocation *userLocation;
@property NSInteger userLocationSource;
@property(retain) CLLocation *fixedUserLocation;
@property BOOL ignoreLocationUpdates;
@property(retain) MKRingPositionView *positionView;
@property(retain) MKDotPositionView *trackingPositionView;
@property BOOL liveTrackingAutoSelectZoomLevel;
@property(retain) MKMapViewPositioningChange *positioningChange;
@property(readonly) NSInteger trackingPositionViewLevel;
@property(readonly) NSInteger positionViewLevel;
@property(readonly) MKPositionView *currentPositionView;
@property <MKMapViewDelegate> *delegate;
@property NSUInteger mapType;
@property ? centerCoordinate;
@property float zoomLevel;
@property(readonly) float minZoomLevel;
@property(readonly) float maxZoomLevel;
@property(getter=isShowingTraffic) BOOL showingTraffic;
@property NSInteger userPositionViewMode;
@property(retain) CLLocation *userLocation;

+ (double)userLocationCacheDuration;
+ (void)setUserLocationCacheDuration:(double)arg1;
+ (id)boundsOutOfBoundsValue;
+ (Class)positionViewClassWithMode:(NSInteger)arg1;

- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)_setDrawsGridBackground:(BOOL)arg1;
- (void)_updateBadge;
- (NSInteger)_viewIndexForSubview:(id)arg1;
- (void)_insertSubview:(id)arg1;
- (void)_goToDefaultLocation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_setAccessoryTimer:(id)arg1;
- (void)_setPinDropTimer:(id)arg1;
- (void)_setTileExpirationTimer:(id)arg1;
- (void)_setTilingTimer:(id)arg1;
- (void)dealloc;
- (BOOL)isLiveSearchEnabled;
- (void)setLiveSearchEnabled:(BOOL)arg1;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (BOOL)_isHandlingUserEvent;
- (BOOL)_isInteractionEnabled;
- (BOOL)_isTilingEnabled;
- (BOOL)shouldPulsateTraffic;
- (id)_createLevelViewWithScale:(NSInteger)arg1;
- (void)_setScale:(float)arg1 forLevelView:(id)arg2;
- (void)_updateScaleForLevelView:(id)arg1;
- (id*)_mapLevelViews;
- (float)minZoomLevel;
- (float)_maxZoomLevelForLongLat:(struct CGPoint { float x1; float x2; })arg1;
- (float)maxZoomLevel;
- (float)_scaleForScale:(float)arg1;
- (float)_scaleForScale:(float)arg1 longLat:(struct CGPoint { float x1; float x2; })arg2;
- (float)_scaleForScaleUsingCurrentPosition:(float)arg1;
- (NSInteger)_roundedZoomLevel;
- (id)_mapLevelViewForLevel:(NSInteger)arg1;
- (id)_mapLevelViewForScale:(float)arg1;
- (id)_addLevelViewAtLevel:(NSInteger)arg1 updateScale:(BOOL)arg2;
- (id)_mapLevelView;
- (struct CGPoint { float x1; float x2; })_centerPoint;
- (struct CGPoint { float x1; float x2; })centerLongLat;
- (struct CGSize { float x1; float x2; })longLatSpan;
- (void)_updateTraffic;
- (void)_cleanupTilesInLevelViews:(id*)arg1 viewCount:(NSInteger)arg2;
- (void)_cleanupTiles;
- (void)_resetRouteLoader;
- (void)updateExpiredTiles;
- (void)_stopTileLoading;
- (void)updateTiling;
- (void)_startTilingTimer;
- (void)didMoveToWindow;
- (void)willMoveToWindow:(id)arg1;
- (void)setMapType:(NSUInteger)arg1;
- (NSUInteger)mapType;
- (void)setCenterCoordinate:(struct { double x1; double x2; })arg1;
- (struct { double x1; double x2; })centerCoordinate;
- (void)setZoomLevel:(float)arg1;
- (float)zoomLevel;
- (void)setShowingTraffic:(BOOL)arg1;
- (BOOL)isShowingTraffic;
- (void)setAllowsPulsatingTraffic:(BOOL)arg1;
- (BOOL)allowsPulsatingTraffic;
- (void)_updateScrollingAndGestures;
- (void)_setAnimationType:(NSInteger)arg1;
- (void)_switchToAnimationType:(NSInteger)arg1;
- (NSInteger)animationType;
- (NSUInteger)eventMode;
- (void)_logViews;
- (void)_updateRouteView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_routePositionFrame;
- (struct CGPoint { float x1; float x2; })_routePositionCenter;
- (void)_updateRoutePositionView;
- (struct CGPoint { float x1; float x2; })_routePositionLongLat;
- (void)_updateRoutePosition;
- (void)_updateAccesories;
- (NSInteger)trafficStatus;
- (void)_updateTrafficStatus;
- (void)_adjustPositionViewWithPreviousScrollerOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)_setStartEffectsTimer:(id)arg1;
- (void)_scheduleStartEffects;
- (void)_cancelStartEffects;
- (void)_startEffects;
- (void)_stopEffects;
- (void)_updateEffects;
- (void)_updateTiling;
- (void)_updateTiling:(BOOL)arg1;
- (void)startEffects;
- (void)stopEffects:(BOOL)arg1;
- (void)stopEffects;
- (void)setSuspended:(BOOL)arg1;
- (void)setLoadingEnabled:(BOOL)arg1;
- (void)_setEventMode:(NSInteger)arg1;
- (void)_clearEventMode:(NSInteger)arg1;
- (void)_cancelAccessories;
- (void)_cancelDoubleTap;
- (void)_cancelAccessoriesAndDoubleTap;
- (void)_showAccessories;
- (id)_stringWithEventMode:(NSInteger)arg1;
- (BOOL)_isScrolling;
- (BOOL)_wasScrolling;
- (void)_setScrolling:(BOOL)arg1 updateTiling:(BOOL)arg2;
- (void)_setScrolling:(BOOL)arg1;
- (BOOL)_animateScrollToOffset:(struct CGPoint { float x1; float x2; })arg1 duration:(double)arg2 type:(NSInteger)arg3;
- (BOOL)_animateScrollToOffset:(struct CGPoint { float x1; float x2; })arg1 duration:(double)arg2 type:(NSInteger)arg3 context:(id)arg4;
- (id)mapInfo;
- (void)_didChangePosition;
- (BOOL)_isScrollingAnimation:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)_clearFixedUserLocation;
- (id)_createFixedUserLocationFromPosition;
- (void)_fixUserLocationFromPresentationValue;
- (void)_synchronizeScrollingAnimation:(BOOL)arg1 includePositionView:(BOOL)arg2;
- (void)_freezeScrollingAnimation;
- (BOOL)_isScrollingAnimation;
- (void)_removeScrollingAnimation;
- (BOOL)_isVisible;
- (void)scrollWithOffset:(struct CGPoint { float x1; float x2; })arg1 toRevealBubbleInAccessoryView:(id)arg2;
- (struct CGPoint { float x1; float x2; })_scrollPointForLongLat:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })convertCoordinate:(struct { double x1; double x2; })arg1 toPointToView:(id)arg2;
- (float)pointDistanceFromCoordinate:(struct { double x1; double x2; })arg1 toCoordinate:(struct { double x1; double x2; })arg2;
- (void)_zoomWillStart;
- (BOOL)goToCenterLongLat:(struct CGPoint { float x1; float x2; })arg1 zoomLevel:(float)arg2 animationType:(NSInteger)arg3;
- (float)_zoomLevelForTopLeftLongLat:(struct CGPoint { float x1; float x2; })arg1 andBottomRightLongLat:(struct CGPoint { float x1; float x2; })arg2;
- (float)_zoomLevelForSpan:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)goToCenterLongLat:(struct CGPoint { float x1; float x2; })arg1 longLatSpan:(struct CGSize { float x1; float x2; })arg2 animationType:(NSInteger)arg3;
- (void)zoomToScale:(float)arg1;
- (void)_resumeSearchResultProcessingAndPinDropAnimations;
- (void)_suspendSearchResultsProcessingAndPinDropAnimations;
- (BOOL)_prepareZoomCoordinatesFromEvent:(struct __GSEvent { }*)arg1 lockOnCenter:(BOOL)arg2;
- (void)pauseUserLocationUpdates;
- (void)resumeUserLocationUpdates;
- (BOOL)_isUserInitiated;
- (void)willStartGesturesInView:(id)arg1 forEvent:(struct __GSEvent { }*)arg2;
- (void)gestureDidChange:(NSInteger)arg1 inView:(id)arg2 forEvent:(struct __GSEvent { }*)arg3;
- (void)didFinishGesturesInView:(id)arg1 forEvent:(struct __GSEvent { }*)arg2;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_sendScrollerEvent:(struct __GSEvent { }*)arg1 selector:(SEL)arg2;
- (void)_selectUserLocationTypeWithDeltaZoomScale:(float)arg1;
- (void)_prepareForZoomAnimationToScale:(float)arg1 fromEvent:(struct __GSEvent { }*)arg2;
- (void)_zoomToNextLevel:(BOOL)arg1 event:(struct __GSEvent { }*)arg2;
- (NSUInteger)countOfSet:(id)arg1 minusSubset:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)mouseDown:(struct __GSEvent { }*)arg1;
- (void)mouseDragged:(struct __GSEvent { }*)arg1;
- (void)mouseUp:(struct __GSEvent { }*)arg1;
- (void)gestureStarted:(struct __GSEvent { }*)arg1;
- (void)gestureChanged:(struct __GSEvent { }*)arg1;
- (void)gestureEnded:(struct __GSEvent { }*)arg1;
- (BOOL)didScrollOrZoomAccessoryView:(id)arg1;
- (void)scrollerDidScroll:(id)arg1;
- (void)scrollerWillStartDragging:(id)arg1;
- (void)_userScrollingEnded;
- (void)scrollerDidEndDragging:(id)arg1 willSmoothScroll:(BOOL)arg2;
- (void)scrollerDidEndSmoothScrolling:(id)arg1;
- (void)reachabilityManager:(id)arg1 hostname:(id)arg2 isReachable:(BOOL)arg3;
- (void)levelView:(id)arg1 didAddTile:(id)arg2;
- (void)levelView:(id)arg1 willRemoveTile:(id)arg2;
- (void)_removeTilesFromLevelViews:(id*)arg1;
- (void)levelViewDidLayoutTiles:(id)arg1;
- (void)overlayView:(id)arg1 didClickStreetViewForSearchResult:(id)arg2;
- (void)overlayView:(id)arg1 didClickDisclosureForSearchResult:(id)arg2;
- (void)overlayView:(id)arg1 didSelectSearchResult:(id)arg2 userInitiated:(BOOL)arg3;
- (void)overlayView:(id)arg1 didMoveSearchResult:(id)arg2 toPoint:(struct CGPoint { float x1; float x2; })arg3;
- (void)_willShowRoute;
- (void)_didShowRoute;
- (void)_willHideRoute;
- (void)_didHideRoute;
- (void)_setShowingRoute:(BOOL)arg1 animate:(BOOL)arg2;
- (void)setShowingRoute:(BOOL)arg1 animate:(BOOL)arg2 includingPins:(BOOL)arg3;
- (void)updateBubblePinInVisibleRect;
- (void)overlayViewWillDropPins:(id)arg1;
- (void)overlayViewDidDropPins:(id)arg1;
- (void)_dropPinsAndShowRouteAnimated:(BOOL)arg1;
- (void)_dropPinsAndShowRouteAnimated;
- (void)setSearchMode:(NSInteger)arg1;
- (id)visibleSearchResultPins;
- (id)visibleSearchResults;
- (id)searchResultsToSave;
- (id)_validateSearchResultInViewPortFromResults:(id)arg1 searchResult:(id)arg2;
- (void)dropPinsAfterUniquingSearchResults:(id)arg1 selectedSearchResult:(id)arg2 animate:(BOOL)arg3;
- (void)dropPinsForSearchResults:(id)arg1 selectedSearchResult:(id)arg2 animate:(BOOL)arg3;
- (NSInteger)quadrantsForSearching;
- (BOOL)canShowMorePinsInVisibleRect;
- (void)dropCustomPinForSearchResult:(id)arg1 animate:(BOOL)arg2;
- (struct CGPoint { float x1; float x2; })pinDroppingLongLat;
- (void)goToBookmark:(id)arg1;
- (NSUInteger)_visibleSearchResultsCount:(id)arg1 forZoomLevel:(NSInteger)arg2;
- (void)goToSearchResults:(id)arg1 centerLongLat:(struct CGPoint { float x1; float x2; })arg2 longLatSpan:(struct CGSize { float x1; float x2; })arg3;
- (void)dropPinsForSearchResults:(id)arg1 centerLongLat:(struct CGPoint { float x1; float x2; })arg2 longLatSpan:(struct CGSize { float x1; float x2; })arg3 selectedSearchResult:(id)arg4 animate:(BOOL)arg5;
- (id)searchResultsForListView;
- (void)levelView:(id)arg1 didLoadTile:(id)arg2;
- (id)overlayView;
- (void)mapLevelViewDidStartLoading:(id)arg1;
- (void)mapLevelViewDidFinishLoading:(id)arg1;
- (void)mapLevelViewDidFailLoading:(id)arg1;
- (void)mapLevelViewDidStartLoadingTraffic:(id)arg1;
- (void)mapLevelViewDidFinishLoadingTraffic:(id)arg1;
- (void)mapLevelViewDidFailLoadingTraffic:(id)arg1;
- (void)routeLoaderDidStartLoading:(id)arg1;
- (void)routeLoaderDidStopLoading:(id)arg1;
- (void)mapLevelView:(id)arg1 didUpdateTrafficStatus:(NSInteger)arg2;
- (void)dropPinsForRouteFromSearchResult:(id)arg1 toSearchResult:(id)arg2 animate:(BOOL)arg3;
- (void)goToRouteStepAnimated:(BOOL)arg1;
- (void)repositionWithYDelta:(float)arg1;
- (void)centerSelectedPinInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)applicationSuspended:(id)arg1;
- (void)applicationResumed:(id)arg1;
- (void)overlayViewWillAnimateBubble:(id)arg1;
- (void)overlayViewDidAnimateBubble:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })overlayViewVisibleRect:(id)arg1;
- (struct CGPoint { float x1; float x2; })overlayViewCenterLongLat:(id)arg1;
- (struct CGSize { float x1; float x2; })overlayViewLongLatSpan:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })centeringRect;
- (void)setCenteringRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)searchManager;
- (void)seachManager:(id)arg1 removeSearchResults:(id)arg2;
- (id)searchResultsNotToBePurgedForSearchManager:(id)arg1;
- (BOOL)isLiveTrackingEnabled;
- (void)setLiveTrackingEnabled:(BOOL)arg1;
- (void)setLiveTrackingEnabled:(BOOL)arg1 shouldZoom:(BOOL)arg2;
- (BOOL)liveTrackingAutoSelectZoomLevel;
- (void)setLiveTrackingAutoSelectZoomLevel:(BOOL)arg1;
- (NSInteger)endHoverLocationSource;
- (void)setEndHoverLocationSource:(NSInteger)arg1;
- (id)positioningChange;
- (void)setPositioningChange:(id)arg1;
- (void)enableLocationConsole;
- (void)_updateLocationConsole;
- (id)innerCirclePositionView;
- (void)setInnerCirclePositionView:(id)arg1;
- (id)positionView;
- (void)setPositionView:(id)arg1;
- (id)trackingPositionView;
- (void)setTrackingPositionView:(id)arg1;
- (BOOL)_configurePositionView;
- (BOOL)_configureTrackingPositionView;
- (BOOL)_configureInnverCirclePositionView;
- (void)_ensureLiveTrackingResourcesInitialized;
- (id)currentPositionView;
- (id)_positionViewForMode:(NSInteger)arg1 shouldCreate:(BOOL*)arg2;
- (NSInteger)userPositionViewMode;
- (void)setUserPositionViewMode:(NSInteger)arg1;
- (BOOL)_isUserLocationInView:(BOOL)arg1;
- (BOOL)_isLocationCoordinatesInView:(id)arg1;
- (BOOL)_isUserLocationCoordinateInView;
- (BOOL)isBoundedByUserLocation;
- (BOOL)isUserLocationBounded;
- (BOOL)isUserLocationVisible;
- (BOOL)isUserPresentationVisible;
- (BOOL)isRunningPositioningChange;
- (BOOL)hasUserLocation;
- (BOOL)isTrackingUserLocation;
- (BOOL)isCachedUserLocation;
- (id)userLocation;
- (void)setUserLocation:(id)arg1;
- (NSInteger)userLocationSource;
- (void)setUserLocationSource:(NSInteger)arg1;
- (struct CGPoint { float x1; float x2; })userPosition;
- (id)fixedUserLocation;
- (void)setFixedUserLocation:(id)arg1;
- (void)_resetPositioningChange;
- (void)resetUserLocation;
- (BOOL)isUserLocationStale;
- (id)_positionViewsExcluding:(NSInteger)arg1;
- (NSInteger)_viewLevelForPositionView:(id)arg1;
- (NSInteger)positionViewLevel;
- (NSInteger)trackingPositionViewLevel;
- (void)_movePositionView:(id)arg1 toLevel:(NSInteger)arg2;
- (void)_movePositionViewUp;
- (void)_movePositionViewDown;
- (float)_zoomLevelForLocation:(id)arg1 previousLocation:(id)arg2;
- (void)_userLocationInView:(id)arg1 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 center:(struct CGPoint { float x1; float x2; }*)arg3 location:(id)arg4 viewMode:(NSInteger)arg5;
- (void)_userLocationInView:(id)arg1 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 center:(struct CGPoint { float x1; float x2; }*)arg3;
- (BOOL)_positionViewMode:(NSInteger*)arg1 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 bounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg3 center:(struct CGPoint { float x1; float x2; }*)arg4 location:(id)arg5;
- (void)_clearCurrentPositionView;
- (void)_updatePositionView:(NSInteger)arg1;
- (void)_updatePositionView;
- (void)selectVisibleSearchResultNearestUserLocation;
- (void)_goToUserPosition:(BOOL)arg1 shouldZoom:(BOOL)arg2;
- (void)_scrollToUserPosition;
- (void)goToUserPosition;
- (void)_updateUserPositionInfoAndAnimate:(BOOL)arg1;
- (void)_showUserPositionInfoAtWindowPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)_fadeIn:(BOOL)arg1 positionViews:(id)arg2 didStopSelector:(SEL)arg3;
- (void)_fadeInPositionView:(id)arg1;
- (void)_fadeOutPositionViews:(id)arg1;
- (void)_userPositionViewsFadedOut:(id)arg1 didFinish:(id)arg2 context:(void*)arg3;
- (void)_userPositionFadedOut:(id)arg1 didFinish:(id)arg2;
- (void)removeUserPosition;
- (void)_scheduleScrollToReCenterUser;
- (void)_cancelScrollToReCenterUser;
- (void)_runPositioningChangeIfNeeded;
- (void)_scheduleRunPositioningChange:(double)arg1;
- (void)_scheduleRunPositioningChange;
- (void)_cancelRunPositioningChange;
- (BOOL)isScrollToUserCenterPending;
- (void)_scheduleScrollToReCenterUserIfNeeded;
- (void)_setHoverExpirationTimer:(id)arg1;
- (void)_setScrollToReCenterUserTimer:(id)arg1;
- (void)_setPositioningChangeTimer:(id)arg1;
- (BOOL)_isUserLocationNearPoint:(struct CGPoint { float x1; float x2; })arg1 hitSize:(float)arg2;
- (BOOL)_isUserLocationNearEventPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)_transitionToNoWithChange:(id)arg1;
- (void)_transitionFromNoWithChange:(id)arg1;
- (void)_transitionFromHoverWithChange:(id)arg1;
- (void)_transitionFromRingWithChange:(id)arg1;
- (void)_transitionFromDotWithChange:(id)arg1;
- (void)_transitionToTrackingPositionView;
- (void)_transitionBackToPositionView;
- (void)_goToCurrentLocationOnTransitionEnd;
- (void)positionViewDidBounce:(id)arg1;
- (void)positionViewDidZoom:(id)arg1;
- (BOOL)_shouldChangeViewMode:(NSInteger*)arg1 withChange:(id)arg2;
- (float)_zoomLevelForUserLocation:(id)arg1 distanceHysteresis:(BOOL)arg2 positionViewHysteresis:(BOOL)arg3;
- (BOOL)_shouldChangeZoomLevel:(float*)arg1 withChange:(id)arg2;
- (BOOL)_shouldChangeViewMode:(NSInteger*)arg1 withPositionView:(id)arg2;
- (void)_startHoverExpirationTimerWithDuration:(double)arg1 change:(id)arg2;
- (void)_startPositionViewHovering;
- (BOOL)_hasHovered;
- (BOOL)_isHovering;
- (void)_stopHovering;
- (void)_updateHoverExpirationTimerWithChange:(id)arg1;
- (void)_updateHoverExpirationTimerWithChange:(id)arg1 forceTerminate:(BOOL)arg2;
- (void)_scheduleHoverWithChange:(id)arg1;
- (id)_positioningChange:(BOOL)arg1;
- (id)_positioningChangeWithLocation:(id)arg1 source:(NSInteger)arg2 hasFocus:(BOOL)arg3 isUpdated:(BOOL)arg4;
- (void)_startPositioningChange:(id)arg1;
- (BOOL)_isPositioningChangeDone;
- (BOOL)_isReadyToRunPositioningChange;
- (BOOL)_haveNewPendingLocation;
- (BOOL)ignoreLocationUpdates;
- (void)setIgnoreLocationUpdates:(BOOL)arg1;
- (void)_pauseUserLocationUpdates;
- (void)_resumeUserLocationUpdates:(BOOL)arg1;
- (BOOL)_willPositionView:(id)arg1 displayAccuracy:(double*)arg2 bounds:(id*)arg3;
- (void)_runPositioningChange;
- (void)_updatePositioningChangeMetrics:(id)arg1;
- (BOOL)_deviceIsPluggedIn;
- (void)locationManagerUpdatedLocation:(id)arg1;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (void)locationManagerDidReset:(id)arg1;
- (void)startCalculatingUserLocation;
- (void)stopCalculatingUserLocation;

@end