/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSURL, NSData, NSString;

@interface MLTrackImportChapter : NSObject <NSCopying> {
    NSData *_imageData;
    NSString *_imageCacheKey;
    unsigned int _startTimeInMilliseconds;
    NSString *_title;
    NSURL *_url;
    NSString *_urlTitle;
}

@property(copy) NSData * imageData;
@property(copy) NSString * imageCacheKey;
@property unsigned int startTimeInMilliseconds;
@property(copy) NSString * title;
@property(copy) NSURL * URL;
@property(copy) NSString * URLTitle;


- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)setURL:(id)arg1;
- (int)compare:(id)arg1;
- (id)URL;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)imageData;
- (void)setImageCacheKey:(id)arg1;
- (void)setURLTitle:(id)arg1;
- (void)setStartTimeInMilliseconds:(unsigned int)arg1;
- (void)setImageData:(id)arg1;
- (BOOL)isEqualIgnoringTimesAndTitle:(id)arg1;
- (id)URLTitle;
- (id)imageCacheKey;
- (unsigned int)startTimeInMilliseconds;

@end
