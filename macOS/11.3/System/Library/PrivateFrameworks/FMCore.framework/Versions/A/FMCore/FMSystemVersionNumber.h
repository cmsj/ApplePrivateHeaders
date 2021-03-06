/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/Versions/A/FMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FMSystemVersionNumber : NSObject {

	long long _baseNumber;
	NSString* _baseLetter;
	long long _buildNumber;
	NSString* _suffix;

}

@property (assign,nonatomic) long long baseNumber;               //@synthesize baseNumber=_baseNumber - In the implementation block
@property (nonatomic,copy) NSString * baseLetter;                //@synthesize baseLetter=_baseLetter - In the implementation block
@property (assign,nonatomic) long long buildNumber;              //@synthesize buildNumber=_buildNumber - In the implementation block
@property (nonatomic,copy) NSString * suffix;                    //@synthesize suffix=_suffix - In the implementation block
-(NSString *)baseLetter;
-(long long)baseNumber;
-(void)setBaseNumber:(long long)arg1 ;
-(void)setBaseLetter:(NSString *)arg1 ;
-(id)description;
-(id)debugDescription;
-(id)init;
-(long long)compare:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(NSString *)suffix;
-(void)setSuffix:(NSString *)arg1 ;
-(long long)buildNumber;
-(void)setBuildNumber:(long long)arg1 ;
@end

