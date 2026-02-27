// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_6\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 73.21%
// test_accuracy: 55.36%
// prune_trials_per_label: 6
// removed_trials: {'act2': ['act2\\trial_1.txt', 'act2\\trial_2.txt', 'act2\\trial_4.txt', 'act2\\trial_3.txt', 'act2\\trial_5.txt', 'act2\\trial_6.txt'], 'act1': ['act1\\trial_10.txt', 'act1\\trial_8.txt', 'act1\\trial_6.txt', 'act1\\trial_1.txt', 'act1\\trial_2.txt', 'act1\\trial_3.txt']}
// generated: 2026-02-13 17:10:55
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.227564, 1.227564,
    0.406960, -0.406798,
    0.000000, 0.000000,
    -0.429369, -0.429369,
    0.167234, 0.167234,
    0.039116, 0.039116,
    -0.262886, -0.262886,
    -0.216436, -0.216436,
    -0.437178, -0.437178,
    -0.149443, -0.149443,
    -1.340648, -1.340648,
    -0.965332, -0.965332,
};

float Cg_init[2] = {
    0.508262, -1.356392
};

float xstd_init[12] = {
    0.000370, 0.000016, 1.000000, 0.017477, 0.002258, 0.000686, 0.064609, 0.126028, 0.002043, 0.000603, 0.078025, 0.182263
};

float xmean_init[12] = {
    0.002628, -0.007907, 0.000000, 0.010000, 0.007948, -0.006723, 0.137143, 0.420714, 0.006467, -0.006988, 0.102857, 0.358571
};

