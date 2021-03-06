/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <AppKit/NSView.h>

@class NSView, NSScrollView, NSTextView, QCPatch;

@interface QCLogView : NSView {

	NSView* _insideView;
	NSScrollView* _scrollView;
	NSTextView* _textView;
	QCPatch* _rootPatch;
	void** _unused[4];

}
+(void)initialize;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(Class)valueClassForBinding:(id)arg1 ;
-(void)clear:(id)arg1 ;
-(void)_finishInitialization;
-(void)_appendLog:(id)arg1 ;
-(void)_message:(id)arg1 ;
-(void)setRootPatch:(id)arg1 ;
-(id)rootPatch;
@end

