/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

@class ADTimeStamp, NSString, NSData;

@interface ADLogMetaData : PBCodable  {
    NSString *_batchId;
    BOOL _hasMessageSequence;
    int _messageSequence;
    NSData *_impressionIdentifierData;
    BOOL _hasImpressionSequence;
    int _impressionSequence;
    BOOL _hasOverclickCount;
    int _overclickCount;
    ADTimeStamp *_timeStamp;
    int _orientation;
    BOOL _hasConnectionType;
    int _connectionType;
}

@property(readonly) BOOL hasBatchId;
@property(retain) NSString * batchId;
@property BOOL hasMessageSequence;
@property int messageSequence;
@property(readonly) BOOL hasImpressionIdentifierData;
@property(retain) NSData * impressionIdentifierData;
@property BOOL hasImpressionSequence;
@property int impressionSequence;
@property BOOL hasOverclickCount;
@property int overclickCount;
@property(readonly) BOOL hasTimeStamp;
@property(retain) ADTimeStamp * timeStamp;
@property int orientation;
@property BOOL hasConnectionType;
@property int connectionType;

+ (void)initialize;
+ (id)metadataForAd:(id)arg1 impressionSequence:(unsigned int)arg2 overclickCount:(unsigned int)arg3;

- (id)description;
- (void)dealloc;
- (int)connectionType;
- (id)dictionaryRepresentation;
- (void)setOrientation:(int)arg1;
- (int)orientation;
- (id)timeStamp;
- (void)setTimeStamp:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasOverclickCount:(BOOL)arg1;
- (void)setHasImpressionSequence:(BOOL)arg1;
- (void)setHasMessageSequence:(BOOL)arg1;
- (void)setHasConnectionType:(BOOL)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)hasConnectionType;
- (BOOL)hasTimeStamp;
- (int)overclickCount;
- (BOOL)hasOverclickCount;
- (int)impressionSequence;
- (BOOL)hasImpressionSequence;
- (BOOL)hasImpressionIdentifierData;
- (int)messageSequence;
- (BOOL)hasMessageSequence;
- (BOOL)hasBatchId;
- (void)setConnectionType:(int)arg1;
- (void)setOverclickCount:(int)arg1;
- (void)setImpressionSequence:(int)arg1;
- (void)setImpressionIdentifierData:(id)arg1;
- (id)impressionIdentifierData;
- (void)setMessageSequence:(int)arg1;
- (void)setBatchId:(id)arg1;
- (id)batchId;

@end
