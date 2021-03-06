/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Versions/A/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notes/ICNFIMAPResponse.h>

@class NSSet;

@interface ICNFIMAPFlagsResponse : ICNFIMAPResponse {

	NSSet* _flags;

}

@property (nonatomic,copy) NSSet * flags;              //@synthesize flags=_flags - In the implementation block
+(char)handlesResponseWithName:(const char*)arg1 ofLength:(unsigned long long)arg2 ;
-(NSSet *)flags;
-(id)description;
-(void)setFlags:(NSSet *)arg1 ;
@end

