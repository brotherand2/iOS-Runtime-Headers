/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@class BRCAccountSession, NSObject<OS_dispatch_queue>;

@interface BRCStagePersistedState : NSObject <NSSecureCoding> {
    long _latestGCStartTime;
    NSObject<OS_dispatch_queue> *_queue;
    BRCAccountSession *_session;
}

@property(retain) NSObject<OS_dispatch_queue> * queue;

+ (id)loadFromClientStateInSession:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)queue;
- (void)setLatestGCStartTime:(long)arg1;
- (void)setQueue:(id)arg1;
- (long long)timeSinceLatestGCStartTime;

@end