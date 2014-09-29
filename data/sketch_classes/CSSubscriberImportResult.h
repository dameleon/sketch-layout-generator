@interface CSSubscriberImportResult : NSObject
{
unsigned long long _totalUniqueEmailsSubmitted;	// 8 = 0x8
unsigned long long _totalExistingSubscribers;	// 16 = 0x10
unsigned long long _totalNewSubscribers;	// 24 = 0x18
NSArray *_duplicateEmailsInSubmission;	// 32 = 0x20
NSArray *_failureDetails;	// 40 = 0x28
}
+ (id)subscriberImportResultWithDictionary:(id)arg1;
@property(retain) NSArray *failureDetails; // @synthesize failureDetails=_failureDetails;
@property(retain) NSArray *duplicateEmailsInSubmission; // @synthesize duplicateEmailsInSubmission=_duplicateEmailsInSubmission;
@property unsigned long long totalNewSubscribers; // @synthesize totalNewSubscribers=_totalNewSubscribers;
@property unsigned long long totalExistingSubscribers; // @synthesize totalExistingSubscribers=_totalExistingSubscribers;
@property unsigned long long totalUniqueEmailsSubmitted; // @synthesize totalUniqueEmailsSubmitted=_totalUniqueEmailsSubmitted;
- (void).cxx_destruct;
@end
