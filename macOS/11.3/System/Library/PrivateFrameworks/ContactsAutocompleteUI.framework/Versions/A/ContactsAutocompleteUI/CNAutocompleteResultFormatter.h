/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/Versions/A/ContactsAutocompleteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSFormatter.h>

@protocol CNAutocompleteResultWindowDelegate;
@interface CNAutocompleteResultFormatter : NSFormatter {

	char _includeAddress;
	char _suppressNonEmailValues;
	id<CNAutocompleteResultWindowDelegate> _delegate;

}

@property (nonatomic,retain) id<CNAutocompleteResultWindowDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char includeAddress;                                          //@synthesize includeAddress=_includeAddress - In the implementation block
@property (assign,nonatomic) char suppressNonEmailValues;                                  //@synthesize suppressNonEmailValues=_suppressNonEmailValues - In the implementation block
+(id)displayStringForResult:(id)arg1 withDelegate:(id)arg2 ;
-(id<CNAutocompleteResultWindowDelegate>)delegate;
-(void)setDelegate:(id<CNAutocompleteResultWindowDelegate>)arg1 ;
-(id)stringForObjectValue:(id)arg1 ;
-(char)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)setIncludeAddress:(char)arg1 ;
-(id)displayStringForResult:(id)arg1 ;
-(char)includeAddress;
-(char)suppressNonEmailValues;
-(void)setSuppressNonEmailValues:(char)arg1 ;
@end

