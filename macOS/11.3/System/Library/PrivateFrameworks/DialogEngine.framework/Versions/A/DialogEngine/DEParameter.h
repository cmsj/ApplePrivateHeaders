/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:23 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/Versions/A/DialogEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <DialogEngine/DialogEngine-Structs.h>
@class NSString;

@interface DEParameter : NSObject {

	shared_ptr<siri::dialogengine::Parameter>* _This;

}

@property (assign) shared_ptr<siri::dialogengine::Parameter>* This;              //@synthesize This=_This - In the implementation block
@property (retain) NSString * name; 
@property (retain) NSString * type; 
@property (retain) NSString * description; 
-(NSString *)description;
-(id)init;
-(NSString *)name;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(void)setName:(NSString *)arg1 ;
-(void)setDescription:(NSString *)arg1 ;
-(void)setThis:(shared_ptr<siri::dialogengine::Parameter>*)arg1 ;
-(shared_ptr<siri::dialogengine::Parameter>*)This;
-(id)initWithSharedPtr:(shared_ptr<siri::dialogengine::Parameter>*)arg1 ;
-(shared_ptr<siri::dialogengine::Parameter>*)getSharedPtr;
@end

