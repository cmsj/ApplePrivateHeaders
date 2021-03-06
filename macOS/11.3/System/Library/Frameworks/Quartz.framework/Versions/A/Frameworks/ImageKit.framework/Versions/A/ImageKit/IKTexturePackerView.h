/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <AppKit/NSOpenGLView.h>

@class NSPopUpButton, NSTextField, IKTexturePacker, NSTimer;

@interface IKTexturePackerView : NSOpenGLView {

	NSPopUpButton* _packerIndex;
	NSTextField* _koUsed;
	NSTextField* _koFree;
	IKTexturePacker* _packer;
	NSTimer* _autoupdate;

}
-(void)beginOrtho;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)autoUpdate;
-(void)setPacker:(id)arg1 ;
-(id)packer;
@end

