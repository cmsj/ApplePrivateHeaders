/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Lookup.framework/Versions/A/Lookup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Lookup/Lookup-Structs.h>
#import <AppKit/NSFindIndicator.h>
#import <libobjc.A.dylib/NSFindIndicatorDelegate.h>

@class NSAttributedString, NSString;

@interface LUSearchTermIndicator : NSFindIndicator <NSFindIndicatorDelegate> {

	NSAttributedString* _searchTerm;

}

@property (nonatomic,retain) NSAttributedString * searchTerm;              //@synthesize searchTerm=_searchTerm - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)normalizedString:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)drawContentsForRect:(CGRect)arg1 ;
-(NSAttributedString *)searchTerm;
-(void)setSearchTerm:(NSAttributedString *)arg1 ;
-(void)setSearchTerm:(id)arg1 targetView:(id)arg2 targetRect:(CGRect)arg3 ;
@end

