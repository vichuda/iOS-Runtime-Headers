/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableString, WDCharacterProperties;

@interface WDCharacterRun : WDRun  {
    WDCharacterProperties *mProperties;
    NSMutableString *mString;
    BOOL mBinaryWriterContentFlag;
}


- (id)string;
- (void)appendString:(id)arg1;
- (void)setString:(id)arg1;
- (void)dealloc;
- (id)properties;
- (BOOL)isEmpty;
- (void)setPropertiesForDocument;
- (void)clearString;
- (id)initWithParagraph:(id)arg1 string:(id)arg2;
- (void)clearProperties;
- (void)copyPropertiesFrom:(id)arg1;
- (id)initWithParagraph:(id)arg1;
- (void)removeLastCharacter:(unsigned short)arg1;
- (BOOL)binaryWriterContentFlag;
- (void)setBinaryWriterContentFlag:(BOOL)arg1;
- (int)runType;

@end
