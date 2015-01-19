# CSV2MOM
A tool for converting a CSV set into a MOM CoreData database.

## How 2 use
1. `git clone` and `pod install`, as you do.
    - Optionally change the MegaBits-Data branch in the `Podfile`.
2. Make sure the `WorldData.xcdatamodeld` is up to date.
    - If not, update and remake the model files.
3. Make sure all of the classes you want converted are in the `classes` array of `+[MBCSVParser main]`.
4. Run the app.
5. Use [SimDir](https://github.com/somegeekintn/SimDirs) to find the Documents directory. It’ll be somewhere obtuse like this: ![Stupid Example](http://i.imgur.com/Z0qkqa7.png)
6. Copy the files `WorldData`, `WorldData-shm`, and `WorldData-wal` into the `WorldDataManager/` directory in MegaBits.
7. Increment the `CurrentDataVersion` in MegaBits.