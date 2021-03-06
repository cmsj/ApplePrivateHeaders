/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSApplication.framework/Versions/A/TSApplication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSApplication/TSApplication-Structs.h>
#import <TSPersistence/TSPObject.h>

@interface TSACaptionPlacement : TSPObject {

	long long _captionAnchorLocation;
	long long _drawableAnchorLocation;

}

@property (assign,nonatomic) long long captionAnchorLocation;               //@synthesize captionAnchorLocation=_captionAnchorLocation - In the implementation block
@property (assign,nonatomic) long long drawableAnchorLocation;              //@synthesize drawableAnchorLocation=_drawableAnchorLocation - In the implementation block
+(char)needsObjectUUID;
-(char)isEqual:(id)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(void)saveToMessage:(CaptionPlacementArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(char)isEqualToCaptionPlacement:(id)arg1 ;
-(long long)captionAnchorLocation;
-(long long)drawableAnchorLocation;
-(void)loadFromMessage:(const CaptionPlacementArchive*)arg1 unarchiver:(id)arg2 ;
-(id)initWithContext:(id)arg1 drawableAnchorLocation:(long long)arg2 captionAnchorLocation:(long long)arg3 ;
-(void)setCaptionAnchorLocation:(long long)arg1 ;
-(void)setDrawableAnchorLocation:(long long)arg1 ;
@end

