/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Intents.framework/Versions/A/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSNumber, NSString, INSpeakableString;


@protocol INSetProfileInCarIntentExport <NSObject,JSExport>
@property (copy) NSNumber * profileNumber; 
@property (copy) NSString * profileName; 
@property (copy) NSNumber * defaultProfile; 
@property (copy) INSpeakableString * carName; 
@required
-(id)init;
-(void)setProfileName:(id)arg1;
-(NSString *)profileName;
-(INSpeakableString *)carName;
-(void)setCarName:(id)arg1;
-(NSNumber *)profileNumber;
-(void)setProfileNumber:(id)arg1;
-(NSNumber *)defaultProfile;
-(void)setDefaultProfile:(id)arg1;

@end

