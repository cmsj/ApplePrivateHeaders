/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <libobjc.A.dylib/FormCompletionPresentationContext.h>
#import <libobjc.A.dylib/FormCompletionDelegate.h>

@class NSURL, NSWindow, NSView;

@interface FormCompletionAdapter : NSObject <FormCompletionPresentationContext, FormCompletionDelegate> {

	NSWindow* _window;
	Frame* _frame;

}

@property (nonatomic,readonly) NSURL * url; 
@property (nonatomic,__weak,readonly) NSWindow * window;                             //@synthesize window=_window - In the implementation block
@property (nonatomic,readonly) NSView * browserView; 
@property (nonatomic,readonly) Frame* frame;                                         //@synthesize frame=_frame - In the implementation block
@property (nonatomic,readonly) char shouldSaveUsernamesAndPasswords; 
@property (nonatomic,readonly) char shouldSavePasswordsToCloudKeychain; 
+(id)adapterWithWindow:(id)arg1 frame:(const Frame*)arg2 ;
-(NSURL *)url;
-(NSWindow *)window;
-(Frame*)frame;
-(NSView *)browserView;
-(char)shouldSaveUsernamesAndPasswords;
-(char)shouldSavePasswordsToCloudKeychain;
-(char)formCompletion:(FormAutoFillCompletionController*)arg1 fillFormWithSuggestedPassword:(id)arg2 formMetadata:(id)arg3 ;
-(void)formCompletion:(FormAutoFillCompletionController*)arg1 fillFormWithPassword:(id)arg2 formMetadata:(id)arg3 ;
-(void)formCompletion:(FormAutoFillCompletionController*)arg1 collectFormMetadataForSafeAutoFillConfirmationContactProperty:(id)arg2 contractIdentifier:(id)arg3 contactLabel:(id)arg4 ;
-(void)formCompletion:(FormAutoFillCompletionController*)arg1 fillOneTimeCodeFieldsWithValue:(id)arg2 ;
-(id)initWithWindow:(id)arg1 frame:(const Frame*)arg2 ;
-(void)getCredentialMatches:(id*)arg1 andPotentialMatches:(id*)arg2 matchingPartialUsername:(id)arg3 omittingCredentialsUserHasDeniedAccessTo:(char)arg4 ;
-(void)formCompletion:(FormAutoFillCompletionController*)arg1 fillFormWithValues:(id)arg2 autoFillType:(long long)arg3 ;
-(void)formCompletion:(FormAutoFillCompletionController*)arg1 fillFormWithValues:(id)arg2 fieldToFocus:(id)arg3 autoFillType:(long long)arg4 shouldSubmit:(char)arg5 ;
@end

