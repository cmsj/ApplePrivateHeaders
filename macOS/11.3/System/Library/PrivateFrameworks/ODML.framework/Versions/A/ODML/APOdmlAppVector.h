/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ODML.framework/Versions/A/ODML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ODML/ODML-Structs.h>
#import <ODML/APOdmlVector.h>

@interface APOdmlAppVector : APOdmlVector {

	unsigned _adamID;

}

@property (nonatomic,readonly) unsigned adamID;              //@synthesize adamID=_adamID - In the implementation block
-(id)initWithVersion:(id)arg1 header:(APOdmlAppVectorHeader*)arg2 floats:(float*)arg3 ;
-(id)initWithString:(id)arg1 version:(id)arg2 ;
-(id)data;
-(unsigned)adamID;
@end

