/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/NumbersQuicklook.framework/Versions/A/NumbersQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NumbersQuicklook/NumbersQuicklook-Structs.h>
#import <TSText/TSWPPageRep.h>

@interface TNPageRepContainer : TSWPPageRep {

	CGRect _shadowPathRect;
	const CGPathRef _shadowPath;

}
-(void)dealloc;
-(char)isOpaque;
-(void)drawInContext:(CGContextRef)arg1 ;
-(char)masksToBounds;
-(char)directlyManagesLayerContent;
-(id)initWithLayout:(id)arg1 canvas:(id)arg2 ;
-(char)shouldBeginScribbleAtPoint:(CGPoint)arg1 ;
@end

