/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDAirPlayVideoSessionStartedOnClient : PBCodable <NSCopying> {
    unsigned int _audioOnly;
    unsigned int _authMs;
    unsigned int _bitrate;
    unsigned int _bonjourMs;
    unsigned int _connectMs;
    unsigned int _duration;
    unsigned long long _fileBytes;
    struct { 
        unsigned int fileBytes : 1; 
        unsigned int timestamp : 1; 
        unsigned int audioOnly : 1; 
        unsigned int authMs : 1; 
        unsigned int bitrate : 1; 
        unsigned int bonjourMs : 1; 
        unsigned int connectMs : 1; 
        unsigned int duration : 1; 
        unsigned int infoMs : 1; 
        unsigned int postAuthMs : 1; 
        unsigned int secureConnectionMs : 1; 
        unsigned int status : 1; 
        unsigned int transportType : 1; 
        unsigned int type : 1; 
    } _has;
    unsigned int _infoMs;
    unsigned int _postAuthMs;
    unsigned int _secureConnectionMs;
    NSString *_serverModel;
    NSString *_serverVersion;
    NSString *_sessionUUID;
    int _status;
    unsigned long long _timestamp;
    unsigned int _transportType;
    unsigned int _type;
}

@property unsigned int audioOnly;
@property unsigned int authMs;
@property unsigned int bitrate;
@property unsigned int bonjourMs;
@property unsigned int connectMs;
@property unsigned int duration;
@property unsigned long long fileBytes;
@property BOOL hasAudioOnly;
@property BOOL hasAuthMs;
@property BOOL hasBitrate;
@property BOOL hasBonjourMs;
@property BOOL hasConnectMs;
@property BOOL hasDuration;
@property BOOL hasFileBytes;
@property BOOL hasInfoMs;
@property BOOL hasPostAuthMs;
@property BOOL hasSecureConnectionMs;
@property(readonly) BOOL hasServerModel;
@property(readonly) BOOL hasServerVersion;
@property(readonly) BOOL hasSessionUUID;
@property BOOL hasStatus;
@property BOOL hasTimestamp;
@property BOOL hasTransportType;
@property BOOL hasType;
@property unsigned int infoMs;
@property unsigned int postAuthMs;
@property unsigned int secureConnectionMs;
@property(retain) NSString * serverModel;
@property(retain) NSString * serverVersion;
@property(retain) NSString * sessionUUID;
@property int status;
@property unsigned long long timestamp;
@property unsigned int transportType;
@property unsigned int type;

- (unsigned int)audioOnly;
- (unsigned int)authMs;
- (unsigned int)bitrate;
- (unsigned int)bonjourMs;
- (unsigned int)connectMs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)duration;
- (unsigned long long)fileBytes;
- (BOOL)hasAudioOnly;
- (BOOL)hasAuthMs;
- (BOOL)hasBitrate;
- (BOOL)hasBonjourMs;
- (BOOL)hasConnectMs;
- (BOOL)hasDuration;
- (BOOL)hasFileBytes;
- (BOOL)hasInfoMs;
- (BOOL)hasPostAuthMs;
- (BOOL)hasSecureConnectionMs;
- (BOOL)hasServerModel;
- (BOOL)hasServerVersion;
- (BOOL)hasSessionUUID;
- (BOOL)hasStatus;
- (BOOL)hasTimestamp;
- (BOOL)hasTransportType;
- (BOOL)hasType;
- (unsigned int)hash;
- (unsigned int)infoMs;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)postAuthMs;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)secureConnectionMs;
- (id)serverModel;
- (id)serverVersion;
- (id)sessionUUID;
- (void)setAudioOnly:(unsigned int)arg1;
- (void)setAuthMs:(unsigned int)arg1;
- (void)setBitrate:(unsigned int)arg1;
- (void)setBonjourMs:(unsigned int)arg1;
- (void)setConnectMs:(unsigned int)arg1;
- (void)setDuration:(unsigned int)arg1;
- (void)setFileBytes:(unsigned long long)arg1;
- (void)setHasAudioOnly:(BOOL)arg1;
- (void)setHasAuthMs:(BOOL)arg1;
- (void)setHasBitrate:(BOOL)arg1;
- (void)setHasBonjourMs:(BOOL)arg1;
- (void)setHasConnectMs:(BOOL)arg1;
- (void)setHasDuration:(BOOL)arg1;
- (void)setHasFileBytes:(BOOL)arg1;
- (void)setHasInfoMs:(BOOL)arg1;
- (void)setHasPostAuthMs:(BOOL)arg1;
- (void)setHasSecureConnectionMs:(BOOL)arg1;
- (void)setHasStatus:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setHasTransportType:(BOOL)arg1;
- (void)setHasType:(BOOL)arg1;
- (void)setInfoMs:(unsigned int)arg1;
- (void)setPostAuthMs:(unsigned int)arg1;
- (void)setSecureConnectionMs:(unsigned int)arg1;
- (void)setServerModel:(id)arg1;
- (void)setServerVersion:(id)arg1;
- (void)setSessionUUID:(id)arg1;
- (void)setStatus:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTransportType:(unsigned int)arg1;
- (void)setType:(unsigned int)arg1;
- (int)status;
- (unsigned long long)timestamp;
- (unsigned int)transportType;
- (unsigned int)type;
- (void)writeTo:(id)arg1;

@end