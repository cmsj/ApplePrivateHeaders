/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/Versions/A/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOKeyBagProtectedDataDidBecomeAvailableObserver.h>

@class NSString;

@interface MSPMapsDefaultsAccessor : NSObject <GEOKeyBagProtectedDataDidBecomeAvailableObserver> {

	char _protectedDataAvailable;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)synchronize;
+(id)sharedInstance;
+(id)get:(id)arg1 ;
+(void)set:(id)arg1 value:(id)arg2 ;
-(id)init;
-(void)_synchronize;
-(void)protectedDataDidBecomeAvailable:(id)arg1 ;
-(id)_get:(id)arg1 ;
-(void)_set:(id)arg1 value:(id)arg2 ;
@end

