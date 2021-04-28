/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSString, NSDictionary;

@interface IKSSIndexSheetTextLayer : CALayer {

	NSString* _text;
	NSDictionary* _attributes;
	CGSize _textSize;
	CGSize _textMargins;
	char _animates;

}

@property (nonatomic,retain) NSString * text;                        //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) NSDictionary * attributes;              //@synthesize attributes=_attributes - In the implementation block
@property (assign,nonatomic) CGSize textMargins;                     //@synthesize textMargins=_textMargins - In the implementation block
@property (readonly) CGSize textSize; 
@property (assign) char animates;                                    //@synthesize animates=_animates - In the implementation block
-(void)_updateLayerSize;
-(void)_updateTextSize;
-(void)setTextMargins:(CGSize)arg1 ;
-(void)dealloc;
-(NSDictionary *)attributes;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(char)containsPoint:(CGPoint)arg1 ;
-(NSString *)text;
-(id)actionForKey:(id)arg1 ;
-(void)setAnimates:(char)arg1 ;
-(char)animates;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(CGSize)textSize;
-(CGSize)textMargins;
@end
