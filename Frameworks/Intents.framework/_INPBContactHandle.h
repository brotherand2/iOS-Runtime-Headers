/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBContactHandle : PBCodable <NSCopying> {
    struct { 
        unsigned int type : 1; 
    }  _has;
    NSString * _label;
    int  _type;
    PBUnknownFields * _unknownFields;
    NSString * _value;
}

@property (nonatomic, readonly) BOOL hasLabel;
@property (nonatomic) BOOL hasType;
@property (nonatomic, readonly) BOOL hasValue;
@property (nonatomic, retain) NSString *label;
@property (nonatomic) int type;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) NSString *value;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)options;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasLabel;
- (BOOL)hasType;
- (BOOL)hasValue;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)label;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasType:(BOOL)arg1;
- (void)setLabel:(id)arg1;
- (void)setType:(int)arg1;
- (void)setValue:(id)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (id)unknownFields;
- (id)value;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow

+ (id)fromJSONProtoDictionary:(id)arg1;

- (id)toJSONProtoDictionary;

@end