/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSWindowGraphicsContext.h>

@class CALayer;

@interface NSCALayerGraphicsContext : NSWindowGraphicsContext {

	CALayer* _layer;
	SCD_Struct_NS36 _lgcFlags;

}
-(void)dealloc;
-(char)isFlipped;
-(id)_initWithGraphicsPort:(void*)arg1 CALayer:(id)arg2 flipped:(char)arg3 ;
-(id)CALayer;
@end

