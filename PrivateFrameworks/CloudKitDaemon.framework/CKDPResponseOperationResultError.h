/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPResponseOperationResultError : PBCodable <NSCopying> {
    CKDPResponseOperationResultErrorClient * _clientError;
    NSString * _errorDescription;
    NSString * _errorInternal;
    NSString * _errorKey;
    CKDPResponseOperationResultErrorExtension * _extensionError;
    struct { 
        unsigned int retryAfterSeconds : 1; 
    }  _has;
    int  _retryAfterSeconds;
    CKDPResponseOperationResultErrorServer * _serverError;
}

@property (nonatomic, retain) CKDPResponseOperationResultErrorClient *clientError;
@property (nonatomic, retain) NSString *errorDescription;
@property (nonatomic, retain) NSString *errorInternal;
@property (nonatomic, retain) NSString *errorKey;
@property (nonatomic, retain) CKDPResponseOperationResultErrorExtension *extensionError;
@property (nonatomic, readonly) BOOL hasClientError;
@property (nonatomic, readonly) BOOL hasErrorDescription;
@property (nonatomic, readonly) BOOL hasErrorInternal;
@property (nonatomic, readonly) BOOL hasErrorKey;
@property (nonatomic, readonly) BOOL hasExtensionError;
@property (nonatomic) BOOL hasRetryAfterSeconds;
@property (nonatomic, readonly) BOOL hasServerError;
@property (nonatomic) int retryAfterSeconds;
@property (nonatomic, retain) CKDPResponseOperationResultErrorServer *serverError;

- (void).cxx_destruct;
- (id)clientError;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)errorDescription;
- (id)errorInternal;
- (id)errorKey;
- (id)extensionError;
- (BOOL)hasClientError;
- (BOOL)hasErrorDescription;
- (BOOL)hasErrorInternal;
- (BOOL)hasErrorKey;
- (BOOL)hasExtensionError;
- (BOOL)hasRetryAfterSeconds;
- (BOOL)hasServerError;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (int)retryAfterSeconds;
- (id)serverError;
- (void)setClientError:(id)arg1;
- (void)setErrorDescription:(id)arg1;
- (void)setErrorInternal:(id)arg1;
- (void)setErrorKey:(id)arg1;
- (void)setExtensionError:(id)arg1;
- (void)setHasRetryAfterSeconds:(BOOL)arg1;
- (void)setRetryAfterSeconds:(int)arg1;
- (void)setServerError:(id)arg1;
- (void)writeTo:(id)arg1;

@end
