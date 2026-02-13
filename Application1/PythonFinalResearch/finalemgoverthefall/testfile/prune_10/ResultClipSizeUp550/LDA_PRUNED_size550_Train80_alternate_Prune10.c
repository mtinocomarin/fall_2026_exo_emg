// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\prune_10\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 88.41%
// test_accuracy: 72.50%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_22.txt', 'act1\\trial_29.txt', 'act1\\trial_37.txt', 'act1\\trial_23.txt', 'act1\\trial_40.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt', 'act1\\trial_28.txt', 'act1\\trial_11.txt', 'act1\\trial_20.txt'], 'act2': ['act2\\trial_13.txt', 'act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_29.txt', 'act2\\trial_40.txt', 'act2\\trial_11.txt', 'act2\\trial_17.txt', 'act2\\trial_24.txt', 'act2\\trial_37.txt', 'act2\\trial_15.txt']}
// generated: 2026-02-13 14:48:03
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.236669, 0.236728,
    -0.108533, 0.108423,
    -0.044693, 0.044713,
    0.028031, -0.027990,
    1.968464, -1.968536,
    -1.805640, 1.805745,
    -0.143867, 0.143851,
    0.249762, -0.249789,
    -0.602467, 0.602513,
    -0.634801, 0.634760,
    0.184413, -0.184424,
    1.655389, -1.655378,
};

float Cg_init[2] = {
    -0.654144, -0.654166
};

float xstd_init[12] = {
    0.000912, 0.000082, 0.008463, 0.065923, 0.000799, 0.000139, 0.014697, 0.054582, 0.003503, 0.001049, 0.121663, 0.211564
};

float xmean_init[12] = {
    0.005584, -0.007755, 0.002121, 0.092000, 0.002439, -0.007843, 0.005030, 0.049455, 0.009012, -0.006607, 0.132849, 0.465091
};

