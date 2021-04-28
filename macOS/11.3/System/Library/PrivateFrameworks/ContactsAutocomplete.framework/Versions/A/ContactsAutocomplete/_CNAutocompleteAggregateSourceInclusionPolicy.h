/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/Versions/A/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNAutocompleteSourceInclusionPolicy.h>

@class NSArray, NSString;

@interface _CNAutocompleteAggregateSourceInclusionPolicy : NSObject <CNAutocompleteSourceInclusionPolicy> {

	NSArray* _policies;

}

@property (readonly) NSArray * policies;                            //@synthesize policies=_policies - In the implementation block
@property (readonly) char includeContacts; 
@property (readonly) char includeRecents; 
@property (readonly) char includeSuggestions; 
@property (readonly) char includeLocalExtensions; 
@property (readonly) char includeDirectoryServers; 
@property (readonly) char includeCalendarServers; 
@property (readonly) char includeSupplementalResults; 
@property (readonly) char includePredictions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)policies;
-(char)includeContacts;
-(char)includeRecents;
-(char)includeSuggestions;
-(char)includeLocalExtensions;
-(char)includeDirectoryServers;
-(char)includeCalendarServers;
-(char)includePredictions;
-(char)includeSupplementalResults;
-(id)initWithPolicies:(id)arg1 ;
@end
