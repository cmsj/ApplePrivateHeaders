/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /usr/lib/libmecabra.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MecabraFacemarkCandidate : NSObject {

	NSString* _string;
	NSString* _category;

}

@property (nonatomic,readonly) NSString * string;                //@synthesize string=_string - In the implementation block
@property (nonatomic,readonly) NSString * category;              //@synthesize category=_category - In the implementation block
+(id)copyFacemarkCandidatesForLanguage:(int)arg1 ;
+(id)candidateWithString:(id)arg1 category:(id)arg2 ;
+(id)copyFacemarkCandidatesForLocale:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)string;
-(id)surface;
-(NSString *)category;
-(id)initWithString:(id)arg1 category:(id)arg2 ;
@end
