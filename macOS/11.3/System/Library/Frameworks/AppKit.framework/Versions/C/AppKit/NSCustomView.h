/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>

@class NSString, NSView;

@interface NSCustomView : NSView {

	NSString* className;
	NSView* view;
	id extension;

}
+(void)initialize;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)className;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setClassName:(id)arg1 ;
-(void)_setAsClipViewDocumentViewIfNeeded;
-(char)_descendantIsConstrainedByConstraint:(id)arg1 ;
-(id)nibInstantiateWithObjectInstantiator:(id)arg1 ;
@end

