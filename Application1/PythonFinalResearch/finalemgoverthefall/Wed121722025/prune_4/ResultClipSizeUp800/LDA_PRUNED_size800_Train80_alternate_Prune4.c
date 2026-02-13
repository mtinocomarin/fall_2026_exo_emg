// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_4\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 68.45%
// test_accuracy: 54.17%
// prune_trials_per_label: 4
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_23.txt', 'act1\\trial_33.txt', 'act1\\trial_25.txt'], 'act2': ['act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_37.txt', 'act2\\trial_39.txt']}
// generated: 2025-12-17 13:43:27
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.342720, 0.342696,
    0.163714, -0.163663,
    -0.051074, 0.051073,
    -0.079406, 0.079365,
    -0.231342, 0.231440,
    -0.253015, 0.252931,
    -0.062908, 0.062889,
    0.316090, -0.316105,
    -0.388443, 0.388402,
    0.210772, -0.210672,
    0.008188, -0.008201,
    0.084712, -0.084768,
};

float Cg_init[2] = {
    -0.114114, -0.114105
};

float xstd_init[12] = {
    0.001007, 0.000081, 0.012822, 0.081065, 0.003115, 0.000844, 0.090009, 0.182953, 0.000860, 0.000112, 0.019990, 0.076105
};

float xmean_init[12] = {
    0.006495, -0.007687, 0.005206, 0.145524, 0.008579, -0.006863, 0.104350, 0.438429, 0.004346, -0.007714, 0.010984, 0.128381
};

