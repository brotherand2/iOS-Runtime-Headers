/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDBltDelayToSyncUnrestricted : PBCodable <NSCopying> {
    unsigned int  _delayMs;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int delayMs : 1; 
    }  _has;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned int delayMs;
@property (nonatomic) BOOL hasDelayMs;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)delayMs;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasDelayMs;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setDelayMs:(unsigned int)arg1;
- (void)setHasDelayMs:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
