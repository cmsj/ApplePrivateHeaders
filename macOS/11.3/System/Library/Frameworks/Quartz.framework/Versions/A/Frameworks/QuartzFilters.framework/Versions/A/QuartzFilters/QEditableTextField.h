/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzFilters.framework/Versions/A/QuartzFilters
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzFilters/QuartzFilters-Structs.h>
#import <AppKit/NSTextField.h>
#import <libobjc.A.dylib/NSTextFieldDelegate.h>

@class NSString;

@interface QEditableTextField : NSTextField <NSTextFieldDelegate> {

	char _allowsEditing;

}

@property (assign) char allowsEditing;                              //@synthesize allowsEditing=_allowsEditing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)beginEditing;
-(void)endEditing;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(void)controlTextDidEndEditing:(id)arg1 ;
-(void)_commonInit;
-(void)setAllowsEditing:(char)arg1 ;
-(char)allowsEditing;
@end

