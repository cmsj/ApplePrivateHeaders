/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/KeynoteQuicklook.framework/Versions/A/KeynoteQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KeynoteQuicklook/KeynoteQuicklook-Structs.h>
#import <TSDrawables/TSDRep.h>
#import <libobjc.A.dylib/TSDMagicMoveMatching.h>

@class CALayer, KNSlideBackgroundInfo;

@interface KNSlideBackgroundRep : TSDRep <TSDMagicMoveMatching> {

	CALayer* _blackBackgroundLayer;
	char _layerNeedsUpdate;

}

@property (readonly) KNSlideBackgroundInfo * slideBackgroundInfo; 
+(id)magicMoveMatchesBetweenOutgoingObjects:(id)arg1 andIncomingObjects:(id)arg2 textureDescription:(id)arg3 ;
-(char)isOpaque;
-(void)drawInContext:(CGContextRef)arg1 ;
-(id)initWithLayout:(id)arg1 canvas:(id)arg2 ;
-(char)wantsToDistortWithImagerContext;
-(id)textureForDescription:(id)arg1 ;
-(KNSlideBackgroundInfo *)slideBackgroundInfo;
@end

