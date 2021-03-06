/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <ImageKit/IKImageEditView.h>

@class IKSingleImageEffect;

@interface IKImageEffectsView : IKImageEditView {

	IKSingleImageEffect* _effect1;
	IKSingleImageEffect* _effect2;
	IKSingleImageEffect* _effect3;
	IKSingleImageEffect* _effect4;
	IKSingleImageEffect* _effect5;
	IKSingleImageEffect* _effect6;
	IKSingleImageEffect* _effect7;
	IKSingleImageEffect* _effect8;
	IKSingleImageEffect* _effect9;
	IKSingleImageEffect* _effect[9];
	CGImageRef _image;

}
+(id)sharedImageEditView;
-(void)viewWillBecomeActive;
-(void)viewWillBecomeInActive;
-(CGImageRef)createQuestionMarkImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGImageRef)image;
-(void)setDataSource:(id)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
@end

