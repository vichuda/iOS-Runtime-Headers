/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSString, GMMMapPoint;

@interface GMMDataProperties : PBCodable  {
    BOOL _hasDisabled;
    BOOL _disabled;
    BOOL _hasInfoLevel;
    int _infoLevel;
    BOOL _hasInfoValue;
    int _infoValue;
    int _imageWidth;
    int _imageHeight;
    BOOL _hasTileWidth;
    int _tileWidth;
    BOOL _hasTileHeight;
    int _tileHeight;
    NSString *_panoId;
    BOOL _hasNumZoomLevels;
    int _numZoomLevels;
    GMMMapPoint *_latLon;
    NSString *_copyright;
    NSString *_text;
    NSString *_streetRange;
    int _maxZoomLevel;
    int _radius;
    BOOL _hasImageSource;
    int _imageSource;
    BOOL _hasScene;
    int _scene;
}

@property BOOL hasDisabled;
@property BOOL disabled;
@property BOOL hasInfoLevel;
@property int infoLevel;
@property BOOL hasInfoValue;
@property int infoValue;
@property int imageWidth;
@property int imageHeight;
@property BOOL hasTileWidth;
@property int tileWidth;
@property BOOL hasTileHeight;
@property int tileHeight;
@property(retain) NSString * panoId;
@property BOOL hasNumZoomLevels;
@property int numZoomLevels;
@property(retain) GMMMapPoint * latLon;
@property(readonly) BOOL hasCopyright;
@property(retain) NSString * copyright;
@property(readonly) BOOL hasText;
@property(retain) NSString * text;
@property(readonly) BOOL hasStreetRange;
@property(retain) NSString * streetRange;
@property int maxZoomLevel;
@property int radius;
@property BOOL hasImageSource;
@property int imageSource;
@property BOOL hasScene;
@property int scene;


- (id)description;
- (void)dealloc;
- (int)imageHeight;
- (int)imageWidth;
- (void)setImageHeight:(int)arg1;
- (void)setImageWidth:(int)arg1;
- (void)setDisabled:(BOOL)arg1;
- (BOOL)disabled;
- (id)dictionaryRepresentation;
- (BOOL)hasText;
- (id)text;
- (void)setText:(id)arg1;
- (int)radius;
- (void)setRadius:(int)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setCopyright:(id)arg1;
- (id)copyright;
- (void)setHasScene:(BOOL)arg1;
- (BOOL)hasScene;
- (void)setHasImageSource:(BOOL)arg1;
- (BOOL)hasImageSource;
- (int)maxZoomLevel;
- (id)latLon;
- (void)setHasNumZoomLevels:(BOOL)arg1;
- (BOOL)hasNumZoomLevels;
- (id)panoId;
- (void)setHasTileHeight:(BOOL)arg1;
- (BOOL)hasTileHeight;
- (void)setHasTileWidth:(BOOL)arg1;
- (BOOL)hasTileWidth;
- (void)setHasInfoValue:(BOOL)arg1;
- (BOOL)hasInfoValue;
- (void)setHasInfoLevel:(BOOL)arg1;
- (BOOL)hasInfoLevel;
- (void)setHasDisabled:(BOOL)arg1;
- (BOOL)hasDisabled;
- (int)scene;
- (int)imageSource;
- (id)streetRange;
- (BOOL)hasStreetRange;
- (BOOL)hasCopyright;
- (int)numZoomLevels;
- (int)tileHeight;
- (int)tileWidth;
- (int)infoValue;
- (int)infoLevel;
- (void)setScene:(int)arg1;
- (void)setInfoValue:(int)arg1;
- (void)setImageSource:(int)arg1;
- (void)setMaxZoomLevel:(int)arg1;
- (void)setNumZoomLevels:(int)arg1;
- (void)setTileHeight:(int)arg1;
- (void)setTileWidth:(int)arg1;
- (void)setInfoLevel:(int)arg1;
- (void)setStreetRange:(id)arg1;
- (void)setLatLon:(id)arg1;
- (void)setPanoId:(id)arg1;

@end
