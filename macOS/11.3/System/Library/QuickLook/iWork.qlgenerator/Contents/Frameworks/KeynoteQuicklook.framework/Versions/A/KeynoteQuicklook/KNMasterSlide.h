/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/KeynoteQuicklook.framework/Versions/A/KeynoteQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KeynoteQuicklook/KeynoteQuicklook-Structs.h>
#import <KeynoteQuicklook/KNAbstractSlide.h>
#import <libobjc.A.dylib/TSKTransformableObject.h>

@class NSString, KNClassicStylesheetRecord, NSArray;

@interface KNMasterSlide : KNAbstractSlide <TSKTransformableObject> {

	NSString* _name;
	CGRect _objectRect;
	KNClassicStylesheetRecord* _classicStylesheetRecord;
	NSArray* _bodyParagraphStyles;
	NSArray* _bodyListStyles;
	NSString* _thumbnailTextForTitlePlaceholder;
	NSString* _thumbnailTextForBodyPlaceholder;
	char _slideObjectsLayerWithMaster;
	char _hasBug16580905;
	char _calculatedHasBug16580905;

}

@property (nonatomic,copy) NSString * name; 
@property (assign,nonatomic) CGRect objectRect; 
@property (nonatomic,readonly) KNClassicStylesheetRecord * classicStylesheetRecord;              //@synthesize classicStylesheetRecord=_classicStylesheetRecord - In the implementation block
@property (nonatomic,copy) NSArray * bodyParagraphStyles; 
@property (nonatomic,copy) NSArray * bodyListStyles; 
@property (nonatomic,copy) NSString * thumbnailTextForTitlePlaceholder; 
@property (nonatomic,copy) NSString * thumbnailTextForBodyPlaceholder; 
@property (assign,nonatomic) char slideObjectsLayerWithMaster; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(char)hasLocalizedThumbnailText;
+(id)p_defaultMasterGuideColor;
+(id)masterGuideColor;
+(void)setMasterGuideColor:(id)arg1 ;
+(void)mastersNotEquivalentWithFile:(id)arg1 lineNumber:(long long)arg2 reason:(id)arg3 ;
-(NSString *)description;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)addBuild:(id)arg1 ;
-(id)builds;
-(void)acceptVisitor:(id)arg1 ;
-(char)isMaster;
-(id)objectForProperty:(int)arg1 ;
-(id)childEnumerator;
-(char)isThemeContent;
-(char)containsProperty:(int)arg1 ;
-(id)packageLocator;
-(int)intValueForProperty:(int)arg1 ;
-(id)referencedStyles;
-(void)replaceReferencedStylesUsingBlock:(/*^block*/id)arg1 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg1 ;
-(void)adoptStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2 ;
-(char)isObjectVisible;
-(id)buildChunks;
-(char)isMasterSlide;
-(id)initWithSlideNode:(id)arg1 context:(id)arg2 ;
-(char)supportsBuilds;
-(unsigned long long)buildCount;
-(void)removeBuild:(id)arg1 ;
-(unsigned long long)buildChunkCount;
-(void)insertBuildChunk:(id)arg1 afterChunk:(id)arg2 generateIdentifier:(char)arg3 ;
-(void)removeBuildChunk:(id)arg1 rollbackGeneratedIdentifier:(char)arg2 ;
-(void)updatePlaceholderText;
-(void)generateObjectPlaceholderIfNecessary;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(NSArray *)bodyParagraphStyles;
-(NSArray *)bodyListStyles;
-(char)slideObjectsLayerWithMaster;
-(void)setBodyParagraphStyles:(NSArray *)arg1 ;
-(void)setBodyListStyles:(NSArray *)arg1 ;
-(id)defaultTagForDrawable:(id)arg1 ;
-(id)p_defaultThumbnailTextForPlaceholder:(id)arg1 ;
-(KNClassicStylesheetRecord *)classicStylesheetRecord;
-(CGRect)objectRect;
-(void)setObjectRect:(CGRect)arg1 ;
-(NSString *)thumbnailTextForTitlePlaceholder;
-(void)setThumbnailTextForTitlePlaceholder:(NSString *)arg1 ;
-(NSString *)thumbnailTextForBodyPlaceholder;
-(void)setThumbnailTextForBodyPlaceholder:(NSString *)arg1 ;
-(void)setSlideObjectsLayerWithMaster:(char)arg1 ;
-(id)tagsForNewPlaceholderInfos:(id)arg1 ;
-(id)unusedPlaceholderTagBasedOnTag:(id)arg1 ;
-(id)thumbnailTextForPlaceholder:(id)arg1 ;
-(id)imagePlaceholders;
-(id)nonPlaceholderObjects;
-(void)willBeAddedToTheme:(id)arg1 ;
-(void)wasAddedToTheme:(id)arg1 ;
-(void)flushClassicStylesheetRecord;
-(char)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1 ;
-(char)hasBug16580905;
@end
