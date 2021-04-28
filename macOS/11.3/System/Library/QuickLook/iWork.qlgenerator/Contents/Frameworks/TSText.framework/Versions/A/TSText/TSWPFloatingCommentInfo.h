/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSText.framework/Versions/A/TSText
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSText/TSText-Structs.h>
#import <TSText/TSWPShapeInfo.h>
#import <TSText/TSDComment.h>

@class TSDCommentStorage, NSString, TSKAnnotationAuthor, NSDate;

@interface TSWPFloatingCommentInfo : TSWPShapeInfo <TSDComment> {

	TSDCommentStorage* _commentStorage;

}

@property (nonatomic,retain) TSDCommentStorage * commentStorage; 
@property (nonatomic,readonly) double commentScalingMultiplier; 
@property (nonatomic,copy) TSDCommentStorage * storage; 
@property (nonatomic,readonly) char isHighlight; 
@property (nonatomic,readonly) NSString * annotationUUID; 
@property (nonatomic,readonly) int annotationType; 
@property (nonatomic,retain) TSKAnnotationAuthor * author; 
@property (nonatomic,readonly) NSDate * date; 
@property (nonatomic,readonly) int annotationDisplayStringType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)upgradeCommentInfoStorage:(id)arg1 ;
+(void)upgradeCommentParagraphStylesForStylesheet:(id)arg1 withCommentScale:(double)arg2 ;
+(void)upgradeCommentInfoStyle:(id)arg1 ;
+(void)createCommentInfoStyleInStylesheetIfNeeded:(id)arg1 ;
+(id)commentParagraphStyleForStylesheet:(id)arg1 scalingMultiplier:(double)arg2 ;
+(id)bezierPathForExportCommentOutline;
+(id)commentStyleIdentifier;
+(id)p_commentParagraphStyleForStylesheet:(id)arg1 fontSize:(unsigned long long)arg2 ;
+(id)commentParagraphStyleIdentifierForFontSize:(unsigned long long)arg1 ;
+(id)commentParagraphStyleForStylesheet:(id)arg1 ;
+(id)p_defaultPadding;
+(id)p_defaultFill;
+(id)p_defaultStroke;
+(id)p_defaultShadow;
+(id)p_defaultCommentInfoStyleInStylesheet:(id)arg1 ;
+(id)p_commentInfoWithContext:(id)arg1 geometry:(id)arg2 storage:(id)arg3 ;
+(CGSize)commentInitialSizeWithContext:(id)arg1 ;
+(id)commentInfoWithContext:(id)arg1 size:(CGSize)arg2 storage:(id)arg3 ;
-(TSDCommentStorage *)storage;
-(NSDate *)date;
-(unsigned)elementKind;
-(void)setStorage:(TSDCommentStorage *)arg1 ;
-(TSKAnnotationAuthor *)author;
-(int)annotationType;
-(void)setAuthor:(TSKAnnotationAuthor *)arg1 ;
-(char)isHighlight;
-(id)copyWithContext:(id)arg1 ;
-(Class)layoutClass;
-(char)isLockable;
-(Class)repClass;
-(int)annotationDisplayStringType;
-(char)supportsAttachedComments;
-(Class)editorClass;
-(void)wasRemovedFromDocumentRoot:(id)arg1 ;
-(char)supportsHyperlinks;
-(void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2 ;
-(void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2 ;
-(id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 pathSource:(id)arg4 wpStorage:(id)arg5 ;
-(void)saveToArchive:(CommentInfoArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromArchive:(const CommentInfoArchive*)arg1 unarchiver:(id)arg2 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(char)isAllowedInGroups;
-(char)allowsTitle;
-(char)allowsCaption;
-(char)isInDocument;
-(void)enumerateAllAnnotationsInModelWithHitBlock:(/*^block*/id)arg1 ;
-(void)commentWillBeAddedToDocumentRoot;
-(char)isFloatingComment;
-(NSString *)annotationUUID;
-(double)transformGeometryRatioForTransform:(CGAffineTransform)arg1 ;
-(id)creationDateString;
-(TSDCommentStorage *)commentStorage;
-(void)setCommentStorage:(TSDCommentStorage *)arg1 ;
-(double)commentScalingMultiplier;
-(id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 pathSource:(id)arg4 commentStorage:(id)arg5 ;
-(id)pathSourceForExportCommentOutline;
-(id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 pathSource:(id)arg4 wpStorage:(id)arg5 commentStorage:(id)arg6 ;
@end
