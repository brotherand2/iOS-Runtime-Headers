/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFeedViewportPersistenceGap : NSObject <FCFeedElement> {
    NSString * _firstGroupID;
    NSArray * _hiddenElements;
    NSString * _identifier;
    NSString * _lastGroupID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) int feedElementType;
@property (nonatomic, readonly, copy) NSString *firstGroupID;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly, copy) NSArray *hiddenElements;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *lastGroupID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithAdditionalHiddenElements:(id)arg1;
- (id)copyWithIdentifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (int)feedElementType;
- (id)firstGroupID;
- (unsigned int)hash;
- (id)hiddenElements;
- (id)identifier;
- (id)initWithFirstGroupID:(id)arg1 lastGroupID:(id)arg2 hiddenElements:(id)arg3;
- (id)initWithIdentifier:(id)arg1 firstGroupID:(id)arg2 lastGroupID:(id)arg3 hiddenElements:(id)arg4;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isGap;
- (id)lastGroupID;

@end