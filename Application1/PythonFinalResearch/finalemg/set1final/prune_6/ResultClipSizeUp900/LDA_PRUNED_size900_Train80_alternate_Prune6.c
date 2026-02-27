// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_6\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 51.47%
// test_accuracy: 50.00%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_1.txt', 'act1\\trial_10.txt', 'act1\\trial_2.txt', 'act1\\trial_5.txt', 'act1\\trial_6.txt', 'act1\\trial_8.txt'], 'act2': ['act2\\trial_1.txt', 'act2\\trial_10.txt', 'act2\\trial_2.txt', 'act2\\trial_3.txt', 'act2\\trial_4.txt', 'act2\\trial_5.txt']}
// generated: 2026-02-13 17:10:56
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.978836, 0.978842,
    0.296571, -0.296580,
    0.000000, 0.000000,
    -0.382215, -0.382215,
    0.218675, 0.218675,
    -0.324980, -0.324980,
    0.167838, 0.167838,
    0.696200, 0.696200,
    -1.257211, -1.257211,
    -1.274761, -1.274761,
    -1.336179, -1.336179,
    -1.255115, -1.255115,
};

float Cg_init[2] = {
    1.498840, -2.089391
};

float xstd_init[12] = {
    0.000322, 0.000015, 1.000000, 0.015846, 0.001709, 0.000591, 0.065695, 0.119953, 0.001984, 0.000599, 0.076538, 0.179184
};

float xmean_init[12] = {
    0.002522, -0.007915, 0.000000, 0.007647, 0.008091, -0.006715, 0.135294, 0.445882, 0.006548, -0.006978, 0.105882, 0.383530
};

