@interface CSSSKeychain : NSObject
{
}
+ (id)_queryForService:(id)arg1 account:(id)arg2;
+ (BOOL)setPasswordData:(id)arg1 forService:(id)arg2 account:(id)arg3 error:(id *)arg4;
+ (BOOL)setPasswordData:(id)arg1 forService:(id)arg2 account:(id)arg3;
+ (BOOL)setPassword:(id)arg1 forService:(id)arg2 account:(id)arg3 error:(id *)arg4;
+ (BOOL)setPassword:(id)arg1 forService:(id)arg2 account:(id)arg3;
+ (BOOL)deletePasswordForService:(id)arg1 account:(id)arg2 error:(id *)arg3;
+ (BOOL)deletePasswordForService:(id)arg1 account:(id)arg2;
+ (id)passwordDataForService:(id)arg1 account:(id)arg2 error:(id *)arg3;
+ (id)passwordDataForService:(id)arg1 account:(id)arg2;
+ (id)passwordForService:(id)arg1 account:(id)arg2 error:(id *)arg3;
+ (id)passwordForService:(id)arg1 account:(id)arg2;
+ (id)accountsForService:(id)arg1 error:(id *)arg2;
+ (id)accountsForService:(id)arg1;
+ (id)allAccounts:(id *)arg1;
+ (id)allAccounts;
@end
