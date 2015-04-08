/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@class <HMHomeManagerDelegate>, HMHome, HMMessageDispatcher, HMPendingRequests, HMXpcClient, NSArray, NSMutableArray, NSObject<OS_dispatch_queue>, NSString, NSUUID;

@interface HMHomeManager : NSObject <HMMessageReceiver> {
    NSMutableArray *_currentHomes;
    <HMHomeManagerDelegate> *_delegate;
    BOOL _fetchInProgress;
    unsigned int _generationCounter;
    unsigned int _metadataVersion;
    HMMessageDispatcher *_msgDispatcher;
    HMPendingRequests *_pendingRequests;
    HMHome *_primaryHome;
    NSUUID *_uuid;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMXpcClient *_xpcClient;
}

@property(retain) NSMutableArray * currentHomes;
@property(copy,readonly) NSString * debugDescription;
@property <HMHomeManagerDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property BOOL fetchInProgress;
@property unsigned int generationCounter;
@property(readonly) unsigned int hash;
@property(copy,readonly) NSArray * homes;
@property(readonly) NSObject<OS_dispatch_queue> * messageReceiveQueue;
@property(readonly) NSUUID * messageTargetUUID;
@property unsigned int metadataVersion;
@property(retain) HMMessageDispatcher * msgDispatcher;
@property(retain) HMPendingRequests * pendingRequests;
@property(retain) HMHome * primaryHome;
@property(readonly) Class superclass;
@property(retain) NSUUID * uuid;
@property(retain) NSObject<OS_dispatch_queue> * workQueue;
@property(retain) HMXpcClient * xpcClient;

- (void).cxx_destruct;
- (void)_fetchHomeConfiguration;
- (void)_fetchHomeConfigurationWithPrivacyCheck;
- (void)_handleHomeAddedNotification:(id)arg1;
- (void)_handleHomeRemovedNotification:(id)arg1;
- (void)_handleHomesDidUpdateNotification:(id)arg1;
- (void)_handleMetadataUpdatedNotification:(id)arg1;
- (void)_handlePrimaryChangedNotification:(id)arg1;
- (void)_handleQueryHomeKitUsageStateResponse:(id)arg1 completionHandler:(id)arg2;
- (id)_homeWithUUID:(id)arg1;
- (void)_migrateDelegates:(id)arg1 fromHomes:(id)arg2 primaryHome:(id)arg3;
- (void)_registerNotificationHandlers;
- (void)_start;
- (void)_submitHomesConfigFetchMetric:(double)arg1;
- (void)_updateHomes:(id)arg1;
- (void)addHomeWithName:(id)arg1 completionHandler:(id)arg2;
- (id)currentHomes;
- (void)dealloc;
- (id)delegate;
- (void)eraseHomeDataAndDeleteMetadata:(BOOL)arg1 completionHandler:(id)arg2;
- (void)eraseHomeDataWithCompletionHandler:(id)arg1;
- (BOOL)fetchInProgress;
- (unsigned int)generationCounter;
- (id)homes;
- (id)init;
- (void)logControl:(id)arg1 completionHandler:(id)arg2;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (unsigned int)metadataVersion;
- (id)msgDispatcher;
- (id)pendingRequests;
- (void)primaryAccountDidChange:(id)arg1 completionHandler:(id)arg2;
- (void)primaryAccountWasDeletedWithCompletionHandler:(id)arg1;
- (id)primaryHome;
- (void)queryHomeKitUsageStateWithCompletionHandler:(id)arg1;
- (void)queryMetadata:(id)arg1 completionHandler:(id)arg2;
- (void)queryVersionWithCompletionHandler:(id)arg1;
- (void)removeHome:(id)arg1 completionHandler:(id)arg2;
- (void)resetConfiguration:(BOOL)arg1 withoutPopup:(BOOL)arg2 completionHandler:(id)arg3;
- (void)setCurrentHomes:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFetchInProgress:(BOOL)arg1;
- (void)setGenerationCounter:(unsigned int)arg1;
- (void)setMetadata:(id)arg1 completionHandler:(id)arg2;
- (void)setMetadataVersion:(unsigned int)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (void)setPendingRequests:(id)arg1;
- (void)setPrimaryHome:(id)arg1;
- (void)setUuid:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (void)setXpcClient:(id)arg1;
- (void)updatePrimaryHome:(id)arg1 completionHandler:(id)arg2;
- (id)uuid;
- (id)workQueue;
- (id)xpcClient;

@end