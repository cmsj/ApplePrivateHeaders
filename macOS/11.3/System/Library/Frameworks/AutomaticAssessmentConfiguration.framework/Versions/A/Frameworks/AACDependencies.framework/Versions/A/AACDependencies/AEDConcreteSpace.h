/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AutomaticAssessmentConfiguration.framework/Versions/A/Frameworks/AACDependencies.framework/Versions/A/AACDependencies
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AEDSpace.h>

@interface AEDConcreteSpace : NSObject <AEDSpace> {

	unsigned _connectionID;
	unsigned long long _backingSpaceID;

}

@property (nonatomic,readonly) long long spaceID; 
-(void)show;
-(void)destroy;
-(long long)spaceID;
-(void)addWindowWithNumber:(long long)arg1 ;
-(void)removeWindowWithNumber:(long long)arg1 ;
-(char)containsWindowWithWindowNumber:(long long)arg1 ;
@end

