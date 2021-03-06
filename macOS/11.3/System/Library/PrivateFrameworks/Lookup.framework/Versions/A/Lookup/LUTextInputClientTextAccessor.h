/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Lookup.framework/Versions/A/Lookup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Lookup/Lookup-Structs.h>
#import <Lookup/LUTextAccessor.h>

@protocol NSTextInputClient;
@class NSView;

@interface LUTextInputClientTextAccessor : LUTextAccessor {

	NSView*<NSTextInputClient> _textInputClientView;

}

@property (nonatomic,retain) NSView*<NSTextInputClient> textInputClientView;              //@synthesize textInputClientView=_textInputClientView - In the implementation block
+(char)canAccessTextAtLocation:(CGPoint)arg1 ;
+(char)canAccessTextInView:(id)arg1 ;
-(void)dealloc;
-(id)initWithLocation:(CGPoint)arg1 ;
-(id)initWithView:(id)arg1 ;
-(id)_termAtLocation:(CGPoint)arg1 textOrigin:(CGPoint*)arg2 ;
-(id)_termAndTextOrigin:(CGPoint*)arg1 ;
-(id)termForRange:(NSRange)arg1 textOrigin:(CGPoint*)arg2 ;
-(NSView*<NSTextInputClient>)textInputClientView;
-(void)setTextInputClientView:(NSView*<NSTextInputClient>)arg1 ;
@end

